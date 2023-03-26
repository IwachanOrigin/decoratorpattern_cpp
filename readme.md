# decorator pattern cpp demo code

## Overview

    Decorator Patternの使い方

![image](https://user-images.githubusercontent.com/12496951/227788629-49620dfe-c4f2-4e54-b2b9-f7b876119068.PNG)

## 使いどころ

    特定のクラスへ新たな機能を追加する場合、クラス継承を使う手段があります。  
    クラス継承で機能を追加する場合、基底クラスのメソッドをすべて利用できる新たなクラスが作成されます。  
    この場合、機能は静的な追加になるため、そのクラスに別の機能を追加する場合は更に継承を行うか、  
    機能を直接クラスへ追加するか、基底クラスから新たに継承してクラスを作るかする必要があります。  
    その例は「pattern1」で示しています。  
    
    「pattern1」の場合、大量のクラスが作成される(クラスの爆発と呼ぶらしい)ため、管理も大変になってしまいます。  
    その事象をできるだけ避けるために発明されたのが「Decorator Pattern」というわけです。  
    Decorator Pattern では委譲の概念を用います。あるメソッドの処理を別のオブジェクトに任せてしまうわけですね。  
    「Pattern2」でその例を示します。  
    Writerクラスをインターフェイスとしておくことは変わりませんが、すべてのクラスはWriterクラスのみを継承します。  
    LocalFileWriter, ConsoleWriter は基本的な機能を提供するクラスです。このクラスたちはファイルに書き出すか、  
    コンソールに出力するかの機能を持つだけになります。  
    これらのクラスに機能を追加するためのクラスがBrWriter, DebugWriterクラスになります。  
    このクラスたちもWriterを継承するのですが、内部にもWriterクラスをオブジェクトとして保持しています。  
    このWriterオブジェクトへLocalFileWriterやConsoleWriterをセットすることで機能を委譲することができます。  
    それぞれのクラスにて定義したwriteDataメソッドを実行することができるわけですね。  
    
    さらなる発展型として、委譲の責任を持たせるクラスを一つ定義する方法もあります。  
    「pattern3」でそれを示します。  
    今まではすべてのクラスが「Writer」を継承していましたが、新たにAbstractDecoratorWriterクラスを定義します。  
    機能を追加する場合に継承するクラスになるのですが、このクラスが委譲用のWriterオブジェクトを内包してくれます。  
    基本機能を提供するクラスと機能を追加するクラスがより疎結合になり、シンプルになります。  

    とか色々と書きましたが、委譲だろうが継承だろうが使い方次第で結局は複雑化すると思います。  
    要所要所で使い分けて上手い設計を考えるのが一番です。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/decoratorpattern_cpp/blob/master/LICENSE)

