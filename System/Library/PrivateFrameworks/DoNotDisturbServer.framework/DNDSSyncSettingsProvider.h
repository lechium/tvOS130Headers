/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSyncSettingsProviderDelegate;
@class DNDSSyncSettings;

@interface DNDSSyncSettingsProvider : NSObject {

	id<DNDSSyncSettingsProviderDelegate> _delegate;

}

@property (copy,readonly) DNDSSyncSettings * syncSettings; 
@property (assign,nonatomic,__weak) id<DNDSSyncSettingsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DNDSSyncSettingsProviderDelegate>)delegate;
-(void)setDelegate:(id<DNDSSyncSettingsProviderDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(DNDSSyncSettings *)syncSettings;
@end

