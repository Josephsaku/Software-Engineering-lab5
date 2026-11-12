# 软件工程实验 5：Git 分支及标签管理

本项目使用 TinyExpr 小型 C 语言表达式计算器完成分支、合并、双克隆协作、冲突解决和标签管理实验。

- 上游：https://github.com/codeplea/tinyexpr
- 固定上游版本：ba2e32bbcc2d1e644a7e132d24c2f542821cabe0
- 许可证：zlib，原文见 LICENSE；原项目说明见 UPSTREAM_README.md。
- 导入上游根目录全部 C 源文件、头文件及 Makefile；example.c 的后续修改属于本实验。
- 协作方式：同一操作者在 Software-Engineering-lab5A、Software-Engineering-lab5B 两份独立克隆中模拟 A、B，使用同一 GitHub 账户提交，并非两位真实同学。

构建与测试：

```sh
make
./example
```

实验操作及实际命令输出保存在 evidence/ 中。报告沿用所提供的 Word 模板。

## 实验交付

- [实验报告](<实验5 Git分支及标签管理 实验报告.docx>)：保留原模板标题、字体和表格，个人信息留空，包含 20 张操作配图。
- [操作截图打包](evidence/操作截图.zip)：纯终端样式的命令记录截图；各张图片见 evidence/screenshots/。
- [完整执行记录](evidence/git-session.txt)与[冲突内容](evidence/conflict.diff)。
- 功能分支：feature/cli-expression；正式标签：v1.0.0。
- lab5-delete-demo 已在本地和远程创建、查看并删除，记录保留在执行日志中。
