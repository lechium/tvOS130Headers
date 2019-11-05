/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRLearningSession.h>

@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession {

	CoreRCManagerClient* _manager;

}

@property (assign,nonatomic) CoreRCManagerClient * manager;              //@synthesize manager=_manager - In the implementation block
-(CoreRCManagerClient *)manager;
-(void)setManager:(CoreRCManagerClient *)arg1 ;
-(void)endLearning;
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
@end
