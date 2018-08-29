//
//Created by HEWEATHER on 18/07/27.
//日出日落

#import "HeWeatherBaseModel.h"

@class SolarSunriseSunsetBaseClassBasic,SolarSunriseSunsetBaseClassUpdate,SolarSunriseSunsetBaseClassSunrise_Sunset;
@interface SolarSunriseSunsetBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) SolarSunriseSunsetBaseClassBasic *basic;

@property (nonatomic, strong) SolarSunriseSunsetBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<SolarSunriseSunsetBaseClassSunrise_Sunset *> *sunrise_sunset;

@end
@interface SolarSunriseSunsetBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *cid;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cnty;

@end

@interface SolarSunriseSunsetBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface SolarSunriseSunsetBaseClassSunrise_Sunset : HeWeatherBaseModel

@property (nonatomic, copy) NSString *date;

@property (nonatomic, copy) NSString *ms;

@property (nonatomic, copy) NSString *mr;

@property (nonatomic, copy) NSString *ss;

@property (nonatomic, copy) NSString *sr;

@end

