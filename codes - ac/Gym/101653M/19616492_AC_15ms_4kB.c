package main

import (
	"bufio"
	"fmt"
	"os"
)

func main(){
	buf := bufio.NewReader(os.Stdin)
	var t int
	fmt.Fscanf(buf,"%d\n",&t)

	for x := 0;x<t;x++{

		var a,b int
		fmt.Fscanf(buf,"%d %d\n",&a,&b)
		if a>b{
			var ans=a-b+2
			fmt.Printf("%d\n",ans)
		}else{
			var ans=b-a+2
			fmt.Printf("%d\n",ans)
		}
	}
}
