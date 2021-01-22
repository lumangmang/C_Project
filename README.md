
[TOC]
## (一)、C编译链接过程

用C语言编写程序时，编写的内容被存储在文本文件中，该文件被称为**源代码文件(source code file)**

以下是一个名为`concrete.c`的源文件：

```c
#include <stdio.h>
int main(void) {
  printf("Hello World \n");
  return 0;
}
```

C编程的基本策略是，用程序把**源代码文件**转换成**可执行文件**(包含可直接运行的机器语言代码)，典型的C实现通过**编译**、**链接**两个步骤来完成这个过程。

**编译器**把源代码转换成**中间代码**，**链接器**把中间代码和其它代码合并，生成**可执行文件**。C通过这种分而治之的方式完成模块化。可以独立编译单独的模块，然后再用链接器合并已编译的模块。如果只更改某个模块，无需重新编译其它模块。另外，链接器还将我们编写的程序和预编译的库代码合并。

链接器的作用：将我们编写的目标代码、系统的标准启动代码、库代码合并成一个可执行文件。对于库代码，链接器只会把程序中用到的库提取出来。

**源代码(concrete.c)经过编译器形成目标代码(concrete.obj)经过链接器(同时会链接系统的标准启动代码、库代码)形成可执行代码(concrete.exe)**

**Question**

1. 源代码文件、目标代码文件、可执行文件有什么区别？

   源代码文件指我们在文本文件中编写的程序

   目标代码文件是通过编译器将源代码文件翻译来的计算机能识别的文件

   可执行文件是通过链接器将目标代码文件、系统的标准启动代码、库代码合并生成的。

## (二)、数据类型

如果数据是常量，编译器一般通过用户书写的形式来识别类型，如果是变量，需要在声明时指定其类型。

整型范围的公式： -2^(n-1)~2^(n-1)-1  n为整型的内存占用位数。

eg: int类型占2字节=16位  范围 -2^15~2^15 - 1

C语言数据类型关键字：

| 最初K&R给出的关键字 | C90标准添加的关键字 | C99标准添加的关键字 |
| :-----------------: | :-----------------: | :-----------------: |
|         int         |       signed        |        _Bool        |
|        long         |        void         |   _Complex(复数)    |
|        short        |                     |  _Imaginary(虚数)   |
|      unsigned       |                     |                     |
|        char         |                     |                     |
|        float        |                     |                     |
|       double        |                     |                     |

