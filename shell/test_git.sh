1 git 添加（删除）、提交、并推到远程主干
git add （rm）file1 file2
git commit -m "dddddd"
git push origin master:refs/for/master

2 git 打tag并推送（切记先pull）
git pull
git tag （查询tag）
git tag 1.1.4.4
git push origin 1.1.4.4

3 git 更新远程分支到本地
git fetch origin master:tmp
git diff tmp 
git merge tmp
<=>
git pull origin master
<=> (上述方式冲突，强制执行)
git reset --hard
git pull

4 git 切换远程分支
先git checkout -b dev origin/dev
然后再git checkout dev
查看分支：git branch

删除本地分支 
命令行 : $ git branch -d <BranchName>

5 git log
git log -p -2
git log --stat
http://blog.csdn.net/wh_19910525/article/details/7468549

将master同步到某分支

1）在master 上执行git pull
2）在master上创建临时分支：git branch tmp
3）从master切换到目标分支：git checkout {target}
4）在target上把tmp合并过来：git merge tmp

