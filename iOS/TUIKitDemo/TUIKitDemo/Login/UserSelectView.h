


/** 腾讯云IM Demo 用户选择视图
 *  本文件实现登录界面的选择用户视图。
 *  值得注意的是，实际登录模块与Demo中的登录模块有所不同。
 *  Demo中为了方便用户体验，只需在AppDelegate.h中填用户名和usersig即可（具体获得过程请参照https://github.com/tencentyun/TIMSDK/tree/master/iOS）
 *  上述github工程的readme文档中详细的介绍了usersig的获取方式
 *
 *  本类依赖于腾讯云 TUIKit和IMSDK 实现
 */
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
IB_DESIGNABLE

@class UserSelectView;

@protocol UserSelectViewDelegate <NSObject>

@optional

- (void)optionView:(UserSelectView *)optionView selectedIndex:(NSInteger)selectedIndex;

@end

@interface UserSelectView : UIView
/**
 标题名
 */
@property (nonatomic, strong) IBInspectable NSString *title;

/**
 标题颜色
 */
@property (nonatomic, strong) IBInspectable UIColor *titleColor;

/**
 标题字体大小
 */
@property (nonatomic, assign) IBInspectable CGFloat titleFontSize;

/**
 视图圆角
 */
@property (nonatomic, assign) IBInspectable CGFloat cornerRadius;

/**
 视图边框颜色
 */
@property (nonatomic, strong) IBInspectable UIColor *borderColor;

/**
 边框宽度
 */
@property (nonatomic, assign) IBInspectable CGFloat borderWidth;

/**
 cell高度
 */
@property (nonatomic, assign) CGFloat rowHeigt;

/**
 数据源
 */
@property (nonatomic, strong) NSArray *dataSource;

@property (nonatomic, weak) id<UserSelectViewDelegate> delegate;

@property (nonatomic,copy) void(^selectedBlock)(UserSelectView *optionView,NSInteger selectedIndex);

- (instancetype)initWithFrame:(CGRect)frame dataSource:(NSArray *)dataSource;

@end

NS_ASSUME_NONNULL_END
