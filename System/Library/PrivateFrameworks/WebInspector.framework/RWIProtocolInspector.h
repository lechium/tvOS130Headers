/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class RWIProtocolConfiguration;

@interface RWIProtocolInspector : NSObject {

	AugmentableInspectorController* _inspectorController;
	RetainPtr<RWIProtocolConfiguration>* _configuration;
	unique_ptr<RWIAugmentableInspectorControllerClient, std::__1::default_delete<RWIAugmentableInspectorControllerClient> >* _inspectorControllerClient;

}

@property (nonatomic,readonly) RWIProtocolConfiguration * configuration; 
@property (nonatomic,readonly) BOOL connected; 
-(void)dealloc;
-(RWIProtocolConfiguration *)configuration;
-(BOOL)connected;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)inspectorControllerDestroyed;
@end
