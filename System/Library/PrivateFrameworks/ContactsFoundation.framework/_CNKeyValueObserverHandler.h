/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNObserver;
@class NSString;

@interface _CNKeyValueObserverHandler : NSObject {

	id _object;
	NSString* _keyPath;
	id<CNObserver> _observer;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stopObserving;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3 ;
-(void)startObservingWithOptions:(unsigned long long)arg1 ;
@end
