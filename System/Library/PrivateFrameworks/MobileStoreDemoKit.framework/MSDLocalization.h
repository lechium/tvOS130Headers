/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MSDLocalization : NSObject {

	NSDictionary* _localizationTable;

}

@property (nonatomic,retain) NSDictionary * localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSDictionary *)localizationTable;
-(id)localizedStringWithKey:(id)arg1 defaultString:(id)arg2 ;
-(void)setLocalizationTable:(NSDictionary *)arg1 ;
@end
