
// Haven't been solved yet

package main

import (

  "fmt"

)

func add_values(a int, b int) int {

  var c = a + b

  return c
}

func main() {

  var a, b, c int

  fmt.Println("Enter 1st Number: ")

  fmt.Scan(&a)

  fmt.Println("Enter 2nd Number: ")

  fmt.Scan(&b)

  c = add_values(a , b)

  fmt.Printf("X = %d \n", c)

}