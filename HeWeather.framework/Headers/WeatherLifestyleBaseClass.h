//
//Created by HEWEATHER on 18/07/27.
//生活指数

#import "HeWeatherBaseModel.h"

@class WeatherLifestyleBaseClassBasic,WeatherLifestyleBaseClassUpdate,WeatherLifestyleBaseClassLifestyle;
@interface WeatherLifestyleBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) NSArray<WeatherLifestyleBaseClassLifestyle *> *lifestyle;

@property (nonatomic, strong) WeatherLifestyleBaseClassBasic *basic;

@property (nonatomic, strong) WeatherLifestyleBaseClassUpdate *update;

@end
@interface WeatherLifestyleBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface WeatherLifestyleBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherLifestyleBaseClassLifestyle : HeWeatherBaseModel

@property (nonatomic, copy) NSString *brf;

@property (nonatomic, copy) NSString *txt;

@property (nonatomic, copy) NSString *type;

@end

