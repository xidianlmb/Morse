# 2019年国际双创实践周学习总结报告
计算机科学与技术学院      学号：18030100145       姓名：刘牧宾

## 一、国际双创实践周参与情况   

在双创实践周，我参与了开源硬件实战课程。四天学习的主要内容如下：  

### （一）2019/07/02 入门介绍   

1.为什么学习开源硬件  

开源硬件会像开源软件给软件业带来的影响那样，也给硬件相关技术（以及硬件团队自身）带来巨大发展。与开源软件相似，开源硬件里面拥有很多工程实例，它们所用到的专业知识更贴近社会所需求的。另外，社区里面还有很多开源项目供有兴趣的人参与，让尚未踏进社会的学生有机会去体验如何跟别人沟通合作，了解完整的系统工作方式。开源硬件给学生提供了实际有效的工程实例，比为教学而设计的所谓实验质量要高得多。同时，在开源项目的基础上，不只是学生，任何对此感兴趣的人都可以在现有项目基础上开发新的项目。  

2.如何学习开源硬件  

①．建模：首先要做的是使用现有的电路板、跳线、面包板以及要连接的任何设备来建模你想要做的事情。在许多情况下，最简单的事情就是在板上添加更多的 LED，并以新颖的方式让它们闪烁起来。这是一个很好的做出原型的方式，也是一个常见的做法。它看上去并不漂亮，可能会发现自己的线接错了，但这些都是原型 - 只是想证明硬件可以工作。当硬件不工作时，一定要仔细检查一切，不要害怕寻求帮助。    

②．设计：当你弄清楚你想要构建的硬件，现在是时候把你的想法从跳线和面包板变成实际的设计了。这可能听起来过于简单，但在这里有很多地方需要注意。    
 
3.几个常用软件   

Arduino   

 ![](https://github.com/xidianlmb/Morse/blob/master/arduino.PNG)   
 
Fritzing   

 ![](https://github.com/xidianlmb/Morse/blob/master/fritzing.PNG)   
 
Processinng   

 ![](https://github.com/xidianlmb/Morse/blob/master/processing.PNG)  
 
### （二）2019/07/03 软件操作   

arduino安装 、arduino文档、arduino基本操作、arduino库类操作。   

实例：Morse代码   

摩尔斯电码（又译为摩斯密码，Morse code）是一种时通时断的信号代码，通过不同的排列顺序来表达不同的英文字母、数字和标点符号。它的代码包括五种： 点、划、点和划之间的停顿、每个字符之间短的停顿、每个词之间中等的停顿以及句子之间长的停顿。  

代码如下：   

https://github.com/xidianlmb/Morse/blob/master/Morse1/Morse.h
https://github.com/xidianlmb/Morse/blob/master/Morse1/Morse.cpp
https://github.com/xidianlmb/Morse/blob/master/Morse1/Morse1.ino  

### （三）2019/07/04 元器件及电路图   

1.使用在线模拟网站   

https://www.tinkercad.com/things/iiRnJ2Zlgrz-grand-turing-inari/editel?tenant=circuits   

该网站可以提供大量的电子元件模型，让我们方便的观察程序在现实中的用途，并验证程序的正确性和适用性。我们的想法需要加上不断的调试和改进。大量的程序代码让我们一步也不敢分心，紧跟步伐，不断的复制和拷贝，理清程序的结构。往往还未完全清晰就换到下一个案例，不得不感叹自己的脑容量有限，学习的知识太少。只能课后不断努力，最终体会到一个个小器件在手里发挥的作用。    

2.小车电路图及代码   

通过代码实现输入控制小车的左、右转向灯，刹车灯，前进、后退及对应灯闪。代码如下：  

https://github.com/xidianlmb/Morse/blob/master/car.ino     
 
如图所示：  

![](https://github.com/xidianlmb/Morse/blob/master/%E6%8D%95%E8%8E%B7.PNG)  

3.CD4511IC、7位译码器的使用   

如图：  

![](https://github.com/xidianlmb/Morse/blob/master/chuankou/chuankou.PNG)    

七段显示译码器在生活中有着广泛的应用，最普遍的就是用来显示数字。通过控制七段晶体管的亮灭，译码器可以表示0~9等十个不同的数字，从而达到计数的目的。
完成代码：通过串口输入数字，在数码管显示。  

代码如下：  

https://github.com/xidianlmb/Morse/blob/master/chuankou/chuankou.ino  

### （四）2019/07/05 总结  

将Morse代码在tinkercad运行   

https://github.com/xidianlmb/Morse/blob/master/mores2/mores2.ino  

截图：  

![](https://github.com/xidianlmb/Morse/blob/master/mores2/Morse2.PNG)  

## 二、国际双创实践周主要收获   

创业对创业者本身所拥有的专业知识有很高的要求，如果一个创业者不具备将自己所学的知识运用到实际生活生产中的能力，那么创业者本身的素质是不过关的。
我认为大学生是“双创”的主体，而双创周正式是给了我们了解创业的机会。在课程中，我学习到了关于开源硬件的一些知识，对其有了一定的了解。元件功能实现方法的多样性让我感受到了多种多样的想法。在课堂中，每个人都敢于喜欢提问和质疑，喜欢与他人讨论和分享，能形成自己的理解并且能创造性地表达自己的想法，遇到困难能够坚持，善于合作解决问题。经过这堂课，我明显的感觉到自己的批判性思维和发现问题的能力有所提升。   

## 三、意见和建议  
本次国际双创实践周开展效果斐然，但仍有部分现象不尽人意。  

### （一）课上纪律问题  
部分同学上课玩手机、睡觉、打游戏，影响了其他人的听课状态。  
### （二）考勤、作业问题  
存在少数旷课学生，作业抄袭现象依旧存在。  
### （三）其它问题  
老师讲课声音过小，稍微坐后面一些就听不到老师的声音；对经典案例的分析不够透彻，常常听得似懂非懂。
### 建议   
加强对考勤制度的管理力度，力争无迟到、无早退；严厉打击作业抄袭现象，但应避免错怪请教问题、互帮互助甚至问题本身的局限性而导致的作业不可避免的相似；老师讲课时加大音量或者准备麦克风，防止存在因声音小听不到讲课而错过知识的情况；详细讲解经典案例，在学生理解的情况下鼓励其举一反三，逐步加深问题的深度和广度。