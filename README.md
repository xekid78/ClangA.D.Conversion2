# ClangA.D.Conversion2
システム日付の西暦から平成何年かを割り出す

## 処理
`localtime()`関数を使い平成何年かを出力する。

## コード
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t timer;
    struct tm *local;

    timer = time(NULL);
    local = localtime(&timer);

    int seireki = local->tm_year + 1900;
    int heisei = seireki - 1988;
    printf("西暦%d年は平成%d年です。\n", seireki, heisei);
    return 0;
}
```

## 出力結果  
```
西暦2018年は平成30年です。
```
  
## 開発環境
| 開発ツール |  |
|:-|:-|
| OS | Windows10 |
| 仮想化ソフト | Oracle VM VirtualBox 5.2 |
| 構築ソフト | Vagrant 2.0.2 |
| 仮想化上OS | CentOS 6.9 |
| SSHクライアント | PuTTY 0.6.8 |
| FTPクライアント | Cyberduck 6.3.5 |
| エディタ | Atom 1.24.0 |
| 開発言語 | gcc 4.4.7 |
