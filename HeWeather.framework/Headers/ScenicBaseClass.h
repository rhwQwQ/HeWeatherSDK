//
//Created by HEWEATHER on 18/07/28.
//景点天气预报

#import "HeWeatherBaseModel.h"

@class ScenicBaseClassBasic,ScenicBaseClassUpdate,ScenicBaseClassDaily_Forecast;
@interface ScenicBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) ScenicBaseClassBasic *basic;

@property (nonatomic, strong) ScenicBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<ScenicBaseClassDaily_Forecast *> *daily_forecast;

@end
@interface ScenicBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *cid;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cnty;

@end

@interface ScenicBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface ScenicBaseClassDaily_Forecast : HeWeatherBaseModel

@property (nonatomic, copy) NSString *cond_code_n;

@property (nonatomic, copy) NSString *sr;

@property (nonatomic, copy) NSString *tmp_min;

@property (nonatomic, copy) NSString *cond_txt_d;

@property (nonatomic, copy) NSString *date;

@property (nonatomic, copy) NSString *ss;

@property (nonatomic, copy) NSString *tmp_max;

@property (nonatomic, copy) NSString *cond_txt_n;

@property (nonatomic, copy) NSString *wind_sc;

@property (nonatomic, copy) NSString *cond_code_d;

@property (nonatomic, copy) NSString *wind_dir;

@end

