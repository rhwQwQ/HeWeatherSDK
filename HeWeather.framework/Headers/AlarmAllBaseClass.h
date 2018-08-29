//
//Created by HEWEATHER on 18/07/28.
//天气灾害预警集合

#import "HeWeatherBaseModel.h"

@class AlarmAllBaseClassUpdate,AlarmAllBaseClassAlarm_List;
@interface AlarmAllBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) NSArray<AlarmAllBaseClassAlarm_List *> *alarm_list;

@property (nonatomic, strong) AlarmAllBaseClassUpdate *update;

@end
@interface AlarmAllBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface AlarmAllBaseClassAlarm_List : HeWeatherBaseModel

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *level;

@property (nonatomic, copy) NSString *txt;

@property (nonatomic, copy) NSString *stat;

@property (nonatomic, copy) NSString *cid;

@end

