days = int(input());

years = int(days/365);
days -= years*365;

months = int(days/30);
days -= months*30;

print(repr(years)+" ano(s)");
print(repr(months)+" mes(es)");
print(repr(days)+" dia(s)");