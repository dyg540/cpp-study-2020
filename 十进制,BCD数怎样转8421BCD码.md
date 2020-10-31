https://blog.csdn.net/zx6630542/article/details/43351255?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-6.channel_param



BCD数是一种采用4位二进制数表示1位十进制数(0~9)而得到的数。

一、十进制转BCD数

 例如：89的BCD数为（相当于将89中的8和9分别转为二进制，而可以得出BCD码）：

8	9
0101	1001
则可以得出89的BCD数为： 0101 1001
二、BCD数转8421BCD码

接下来就是将此BCD数转为8421BCD码了，其实很简单，将每个分别转成2进制的数按公式求就可以得出（abcd=a*8+b*4+c*2+d*1)

二进制数	转为8421BCD码
0101	0*8+1*4+0*2+1*1=5
1001	1*8+0*4+0*2+1*1=9
将他们合起来则计算完毕，最终BCD数为(0101 1001)的8421BCD码为 59。