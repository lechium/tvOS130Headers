/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFSS : NSObject {

	/*^block*/id _capturedStreams;
	/*function pointer*/void* _trustEval;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)completeWithError:(id)arg1 ;
-(id)initWithTrustChallenge:(/*function pointer*/void*)arg1 capture:(/*^block*/id)arg2 ;
-(BOOL)shouldTrust:(SecTrustRef)arg1 ;
-(void)connectionEstablished:(id)arg1 outputStream:(id)arg2 ;
@end

