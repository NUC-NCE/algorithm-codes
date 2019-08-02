package main
import "fmt"

func main(){
	var t int
	fmt.Scanf("%d\n",&t)

	for x := 0;x<t;x++{

		var a,b int
		fmt.Scanf("%d %d\n",&a,&b)
		if a>b{
			var ans=a-b+2
			fmt.Println(ans)
		}
		if a<=b{
			var ans=b-a+2
			fmt.Println(ans)
		}
	}
}