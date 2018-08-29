//
//Created by HEWEATHER on 18/07/28.
//城市查询

#import "HeWeatherBaseModel.h"

@class SearchBaseClassBasic;
@interface SearchBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) NSArray<SearchBaseClassBasic *> *basic;

@property (nonatomic, copy) NSString *status;

@end
@interface SearchBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

