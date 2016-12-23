Last login: Fri Dec 23 12:58:04 on ttys000
bowie:~ bowiehsu$ ls
Applications		Downloads		Movies			PycharmProjects		caffe			macports		xgboost
BowieHsu.github.io	Dropbox			Music			Untitled		contestapplet.conf	svm.cpp			youcompleteme.py
ClionProjects		GitHub			Pictures		Untitled.ipynb		contestapplet.conf.bak	tensorflow		微云同步盘
Desktop			IdeaProjects		Projects		Workspaces		java			test.cpp
Documents		Library			Public			anaconda		machine_learning	untitled.txt
bowie:~ bowiehsu$ git clone git@github.com:BowieHsu/yolo_net.git
Cloning into 'yolo_net'...
ssh_exchange_identification: read: Connection reset by peer
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
bowie:~ bowiehsu$ git init git@github.com:BowieHsu/yolo_net.git
Initialized empty Git repository in /Users/bowiehsu/git@github.com:BowieHsu/yolo_net.git/.git/
bowie:~ bowiehsu$ l
-bash: l: command not found
bowie:~ bowiehsu$ ls
Applications		Pictures		java
BowieHsu.github.io	Projects		machine_learning
ClionProjects		Public			macports
Desktop			PycharmProjects		svm.cpp
Documents		Untitled		tensorflow
Downloads		Untitled.ipynb		test.cpp
Dropbox			Workspaces		untitled.txt
GitHub			anaconda		xgboost
IdeaProjects		caffe			youcompleteme.py
Library			contestapplet.conf	微云同步盘
Movies			contestapplet.conf.bak
Music			git@github.com:BowieHsu
bowie:~ bowiehsu$ git add README.md
fatal: Not a git repository (or any of the parent directories): .git
bowie:~ bowiehsu$ ls
Applications		Pictures		java
BowieHsu.github.io	Projects		machine_learning
ClionProjects		Public			macports
Desktop			PycharmProjects		svm.cpp
Documents		Untitled		tensorflow
Downloads		Untitled.ipynb		test.cpp
Dropbox			Workspaces		untitled.txt
GitHub			anaconda		xgboost
IdeaProjects		caffe			youcompleteme.py
Library			contestapplet.conf	微云同步盘
Movies			contestapplet.conf.bak
Music			git@github.com:BowieHsu
bowie:~ bowiehsu$ mkdir yolo
bowie:~ bowiehsu$ git clone git@github.com:BowieHsu/yolo_net.git ~/yolo
Cloning into '/Users/bowiehsu/yolo'...
warning: You appear to have cloned an empty repository.
done.
bowie:~ bowiehsu$ ls
Applications		Pictures		java
BowieHsu.github.io	Projects		machine_learning
ClionProjects		Public			macports
Desktop			PycharmProjects		svm.cpp
Documents		Untitled		tensorflow
Downloads		Untitled.ipynb		test.cpp
Dropbox			Workspaces		untitled.txt
GitHub			anaconda		xgboost
IdeaProjects		caffe			yolo
Library			contestapplet.conf	youcompleteme.py
Movies			contestapplet.conf.bak	微云同步盘
Music			git@github.com:BowieHsu
bowie:~ bowiehsu$ cd yolo
bowie:yolo bowiehsu$ ls
bowie:yolo bowiehsu$ git init
Reinitialized existing Git repository in /Users/bowiehsu/yolo/.git/
bowie:yolo bowiehsu$ ls
bowie:yolo bowiehsu$ git add README.md
fatal: pathspec 'README.md' did not match any files
bowie:yolo bowiehsu$ ls
bowie:yolo bowiehsu$ echo "# yolo_net" >> README.md
bowie:yolo bowiehsu$ ls
README.md
bowie:yolo bowiehsu$ git init
Reinitialized existing Git repository in /Users/bowiehsu/yolo/.git/
bowie:yolo bowiehsu$ git add README.md
bowie:yolo bowiehsu$ 
bowie:yolo bowiehsu$ git commit -m "first commit"
[master (root-commit) 3c052ba] first commit
 1 file changed, 1 insertion(+)
 create mode 100644 README.md
bowie:yolo bowiehsu$ 
bowie:yolo bowiehsu$ git remote add origin git@github.com:BowieHsu/yolo_net.git
fatal: remote origin already exists.
bowie:yolo bowiehsu$ git push -u origin master
Counting objects: 3, done.
Writing objects: 100% (3/3), 218 bytes | 0 bytes/s, done.
Total 3 (delta 0), reused 0 (delta 0)
remote: error: refusing to update checked out branch: refs/heads/master
remote: error: By default, updating the current branch in a non-bare repository
remote: error: is denied, because it will make the index and work tree inconsistent
remote: error: with what you pushed, and will require 'git reset --hard' to match
remote: error: the work tree to HEAD.
remote: error: 
remote: error: You can set 'receive.denyCurrentBranch' configuration variable t
remote: error: 'ignore' or 'warn' in the remote repository to allow pushing int
remote: error: its current branch; however, this is not recommended unless you
remote: error: arranged to update its work tree to match what you pushed in som
remote: error: other way.
remote: error: 
remote: error: To squelch this message and still keep the default behaviour, se
remote: error: 'receive.denyCurrentBranch' configuration variable to 'refuse'.
To /Users/bowiehsu/git@github.com:BowieHsu/yolo_net.git
 ! [remote rejected] master -> master (branch is currently checked out)
error: failed to push some refs to '/Users/bowiehsu/git@github.com:BowieHsu/yolo_net.git'
bowie:yolo bowiehsu$ git clone git@github.com:BowieHsu/yolo_net.git
Cloning into 'yolo_net'...
ssh_exchange_identification: read: Connection reset by peer
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
bowie:yolo bowiehsu$ cd ..
bowie:~ bowiehsu$ git clone git@github.com:BowieHsu/yolo_net.git
Cloning into 'yolo_net'...
warning: You appear to have cloned an empty repository.
done.
bowie:~ bowiehsu$ vi ~/.vimrc

    4 " set the runtime path to include Vundle and initialize
    5 set rtp+=~/.vim/bundle/Vundle.vim
    6 call vundle#begin()
    7 
    8 " alternatively, pass a path where Vundle should install plugins
    9 "call vundle#begin('~/some/path/here')
   10 
   11 " let Vundle manage Vundle, required
   12 Plugin 'gmarik/Vundle.vim'
   13 
   14 " Add all your plugins here (note older versions of Vundle used Bundle ins      tead of Plugin)
   15 
   16 
   17 " All of your Plugins must be added before the following line
   18 call vundle#end()            " required
 PASTE  NORMAL  .vimrc                      unix │ utf-8 │ vim    0%  LN   1:1  
YouCompleteMe unavailable: dlopen(/Users/bowiehsu/anaconda/lib/python2.7/lib-dyn
load/_io.so, 2): Symbol not found: __PyCodecInfo_GetIncrementalDecoder
  Referenced from: /Users/bowiehsu/anaconda/lib/python2.7/lib-dynload/_io.so
  Expected in: flat namespace
 in /Users/bowiehsu/anaconda/lib/python2.7/lib-dynload/_io.so
Press ENTER or type command to continue
