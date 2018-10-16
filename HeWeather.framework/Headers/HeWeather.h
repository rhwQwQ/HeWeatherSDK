//
//  HeWeather.h
//  HeWeather
//
//  Created by 宋朝阳 on 2018/5/28.
//  Copyright © 2018年 Song. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for HeWeather.
FOUNDATION_EXPORT double HeWeatherVersionNumber;

//! Project version string for HeWeather.
FOUNDATION_EXPORT const unsigned char HeWeatherVersionString[];

//  #import <HeWeather/HeWeather.h>


/* 当前版本 2018-10-16 1.5.1 */

/**
 * 写在前面的（废）话
 *
 * 此项目中用到了 AFN 进行网络请求 YYModel进行数据解析
 *
 * 使用时请确保你的项目中有 AFN YYModel （如使用pod导入YYKit请将YYKit组件分开导入避免引起冲突）
 */
/**
 * sdk需要开启定位权限，请在工程plist.info文件中添加NSLocationAlwaysAndWhenInUseUsageDescription和NSLocationWhenInUseUsageDescription
 */

/**
 * 使用时请仔细阅读相关文档
 *
 * 其他内容这里不做赘述，祝你写 BUG 愉快
 */


#import <HEWEATHER/AllWeatherInquieirs.h>
#import <HEWEATHER/DataBaseClasses.h>


