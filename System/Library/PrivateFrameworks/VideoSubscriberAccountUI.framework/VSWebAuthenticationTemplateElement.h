/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class VSMessagePortFeature;

@interface VSWebAuthenticationTemplateElement : IKViewElement {

	VSMessagePortFeature* _messagePort;

}

@property (nonatomic,readonly) VSMessagePortFeature * messagePort;              //@synthesize messagePort=_messagePort - In the implementation block
+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(VSMessagePortFeature *)messagePort;
@end

