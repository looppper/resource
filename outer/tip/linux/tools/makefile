1. 依赖
a.txt: b.txt c.txt
	cat b.txt c.txt > a.txt

2. 写法Makefile/makefile
 或 make -f rules.txt
 或 make --file=rules.txt

3. 构建格式
<target> : <prerequisites>
[tab] <commands>

4. 伪目标
clean:
	rm *.o

obash: make clean

当有文件名为clean,上述命令就不会执行
所以要显式声明为目标
.PHONY: clean
clean:
	rm *.o temp

5. 注释
# this is a commet

6. 回声
正常情况下或输出命令再执行
当前面加上@时就不会产生回声

7. 模式匹配
%.o: %.c
# 此时会将其源文件编译为对应的目标文件

8. 创建变量
txt = Hello word
调用变量
$(txt)
