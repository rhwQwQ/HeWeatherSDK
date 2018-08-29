//
//Created by HEWEATHER on 18/07/28.
//天气灾害预警

#import "HeWeatherBaseModel.h"

@class AlarmBaseClassBasic,AlarmBaseClassUpdate,AlarmBaseClassAlarm;
@interface AlarmBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) AlarmBaseClassBasic *basic;

@property (nonatomic, strong) AlarmBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<AlarmBaseClassAlarm *> *alarm;

@end
@interface AlarmBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *cid;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cnty;

@end

@interface AlarmBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface AlarmBaseClassAlarm : HeWeatherBaseModel

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *level;

@property (nonatomic, copy) NSString *txt;

@property (nonatomic, copy) NSString *stat;

@property (nonatomic, copy) NSString *type;

@end

