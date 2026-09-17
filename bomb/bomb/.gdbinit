# ./gdbinit
# 设置默认文件输入，这样我们不必每次手动输入答案
set args answer.txt

# 为各个 phase 函数设置断点，用以观察其执行过程
# 如果你做完了某个 phase，可以将其注释掉，这样就不会再进入该 phase 了
b phase_1
b phase_2
b phase_3
b phase_4
b phase_5
b phase_6
