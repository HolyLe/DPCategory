# DPCategory
UI分类，包含了分类方法和链式语法，参考借鉴了ZZFLEXDemo和YYCategory。

可以通过：

```
UILabelCreate()
.makeChain
.addToSuperView(self.view)
.backgroundColor([UIColor grayColor])
//如果项目导入masonry的话
//    .makeMasonry(^(MASConstraintMaker * _Nonnull make) {
//        make.top.mas_offset(16);
//        make.centerX.equalTo(self.contentView);
//        make.width.height.mas_equalTo(100);
//    })
.assignTo(^(__kindof UIView * _Nonnull view) {
self.label = view;
});
```
很方便的设置Label属性或其他控件属性。

它可以：

1. 完美的符合NSObject的继承体系,不同控件只会拥有自己继承体系中的方法。如果可以的话，可以方便的扩展方法。
2. 链式风格，可以清楚的了解到控件设置到加载的全过程，方便复制和修改，更快的创建UI。
3. 控件由单独model执行设置方法，非常安全。

[iOS OC项目优化之路（一）之UIKit篇](https://www.jianshu.com/p/7c64ab931dc7)

已支持cocopods,

pod 'DPCategory'
