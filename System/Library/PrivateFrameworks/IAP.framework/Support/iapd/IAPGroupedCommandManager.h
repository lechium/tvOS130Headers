/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSMutableDictionary;

@interface IAPGroupedCommandManager : NSObject {

	NSMutableDictionary* _iapGroupedCommands;

}
+(id)sharedManager;
-(void)dealloc;
-(void)startGrouping:(IPodTransport*)arg1 ;
-(void)applyAndCancelGrouping:(IPodTransport*)arg1 ;
-(void)cancelGrouping:(IPodTransport*)arg1 ;
-(void)videoOutSettingsChanged:(IPodTransport*)arg1 ;
-(void)lineOutEnabled:(BOOL)arg1 onTransport:(IPodTransport*)arg2 ;
-(BOOL)isGrouping:(IPodTransport*)arg1 ;
@end

