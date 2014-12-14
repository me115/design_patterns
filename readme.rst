.. _readme:

图说设计模式
===============

本书使用图形和代码结合的方式来解析设计模式；

每个模式都有相应的对象结构图，同时为了展示对象间的交互细节，
我会用到时序图来介绍其如何运行；（在状态模式中，
还会用到状态图，这种图的使用对于理解状态的转换非常直观）

为了让大家能读懂UML图，在最前面会有一篇文章来介绍UML图形符号(看到UML类图和时序图);



在系统的学习设计模式之后，我们需要达到3个层次：

1. 能在白纸上画出所有的模式结构和时序图；

2. 能用代码实现；如果模式的代码都没有实现过，是用不出来的；即所谓，看得懂，不会用；

3. 灵活应用到工作中的项目中；


目录结构说明
--------------------

本书使用reStructuredText编写，你应该从index.rst开始；

根目录下的design_patterns.EAP为 EA的工程文件，里面包含里书中所有的类图和时序图示例；

code/：书中所有模式实现的示例源代码（工程使用C-Free组织，在gcc 4.6.2下编译通过）；

以下三个目录为具体的模式讲解文章；

creational_patterns/ structural_patterns/ behavioral_patterns/

_static/：包含书中用到的所有图片；

_build/： 使用sphnix生成的html文档目录；

sphinx_rtd_theme/：为生成html文档所使用的主题；


在线浏览
====================

http://design-patterns.readthedocs.org/zh_CN/latest/index.html
