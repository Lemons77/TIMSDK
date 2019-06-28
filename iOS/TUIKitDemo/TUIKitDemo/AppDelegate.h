//
//  AppDelegate.h
//  TUIKitDemo
//
//  Created by kennethmiao on 2018/10/10.
//  Copyright © 2018年 kennethmiao. All rights reserved.
//

#import <UIKit/UIKit.h>

#define Key_UserInfo_Appid @"Key_UserInfo_Appid"
#define Key_UserInfo_User  @"Key_UserInfo_User"
#define Key_UserInfo_Pwd   @"Key_UserInfo_Pwd"
#define Key_UserInfo_Sig   @"Key_UserInfo_Sig"

//快速跑通 demo 请参考官网文档：https://cloud.tencent.com/document/product/269/32674
#define sdkAppid    1400225691  //替换成您在控制台生成的 sdkAppid

#define identifier1 @"lemon"
#define userSig1    @"eJxlj11PgzAYhe-5FaS3GldayqKJF0hwLNmHgTkdNw2hxb2uA4Qy2Iz-XYdLJPHcPs-Jyfk0TNNEq1l0k6Rp0eSa62MpkXlnIoyu-2BZguCJ5rQS-6DsSqgkTzItqx5ajDGC8dABIXMNGVwMJfdFPsC12PF*47dvY0wIc26toQJvPZz7z940eLoq1nGbSOrEdPJo*9smWHkT2oVKKRHSwDucus22AxAu*G4B7LTcpe*jiLTz2s2aeFFSt30JHxpVsOloFh0-FtV62b5u7geTGvbycsixmD2mznhAD7Kq4efFWSDYYhah*BxkfBnfhnpeLw__"

#define identifier2 @"TianTian"
#define userSig2    @"eJxlj0tPg0AUhff8CsJWo3cGphQTF6RiQEpiLX25IVOY4sizw9BAjf-dFJtI4knu6vtyT86XoqqqFs6XdzSOq7aUkexrpqkPqgba7R*sa55EVEa6SP5B1tVcsIgeJBMDRIQQDDB2eMJKyQ-8aoSclpcbGU2SRUPN7wsDAGMysdBY4ekAA2c18xazoEv0-D51P-ztpoWgec3oy3MPvD1Wm72fdYsbNxfg7W3f9tKY9K1nW0VnQn5ExlOw0z*td8dZunS9q-25W4gytN*2p-P0cVQpecGumyaIGKY*NUf0xETDq3IQMCCCsA6XaMq38gOIgl5c"

#define identifier3 @"DaSha"
#define userSig3    @"eJxlz11PgzAUgOF7fgXpLUbbQlG8Qz5GFZORMXVXpIMyKg4QugEz-nczXCKJ5-Z5T07Ol6KqKojD1TVL0-pQyUSODQfqvQoguPrDphFZwmSit9k-5EMjWp6wXPJ2QkQIwRDOG5HxSopcXAqXrQo24y4rk*nG774BIcbEtNA8EbsJn72NQyP3cTBqZzz5y9Swc-MQuI7uW9uOvZrmWwy9uL-xdtr7QIN1Twub8vEDvyxYsT*VT7inIYsehmPka3bwmYUyvUsX3qbcBtjVZiel2PPLQyYixq2BrJkeeduJupoCDBFBWIfnAcq38gOhLVxX"

#define identifier4 @"XiaoMei"
#define userSig4    @"eJxlj1FPgzAUhd-5FYTXGWmBMjHxwTUzTrYEHKDjhQAteIOjtasEY-zvRlwiiff1*3LOuZ*GaZpWst1flnUt3ntd6A-JLfPatJB18QelBFaUunAV*wf5KEHxomw0VxPEhBAHobkDjPcaGjgbz1CKHYeZcGJdMbX8JngIOQ7xAzxXoJ3gbp3STUyHaMyjseoeD3qv2EMYVTLBty-DXZq9tltIKFk68i3oFk28aVcr*gRpcFBi6cP66ljFoVjoit3ntkuZLe0sC5GoaJ2Lm1mlhiM-v*Rj4i09bz5o4OoEop8EB2GCHRf9nGV8Gd8MUF2z"
#define sdkBusiId         12742
#define BUGLY_APP_ID      @"e965e5d928"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) NSData *deviceToken;
- (UIViewController *)getLoginController;
- (UITabBarController *)getMainController;
@end

