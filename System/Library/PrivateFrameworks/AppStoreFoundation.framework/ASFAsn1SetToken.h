/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreFoundation/ASFAsn1Token.h>

@interface ASFAsn1SetToken : ASFAsn1Token {

	const char* mReadPointer;

}
-(id)description;
-(void)reset;
-(id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char*)arg4 opaque:(BOOL)arg5 ;
-(id)nextToken;
@end
