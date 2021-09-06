test_case = int(input())
for i in range(test_case):
    word1, word2 = input().split(' ')
    final_words = []
    count = 0
    for i, j in zip(word1, word2):
        final_words.append(i)
        final_words.append(j)
        count = count + 1
    if(len(word1) > len(word2)):
        final_words.append(word1[count:])
    if(len(word2) > len(word1)):
        final_words.append(word2[count:])
    print("".join(final_words))
