/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol P256PrivateKeyProtocol;
@class NSString;

@interface FullKey : NSObject {

	BOOL _isPersistent;
	int _keyStore;
	NSString* _keyTag;
	id<P256PrivateKeyProtocol> _key;
	NSString* _keyLabel;
	NSString* _access;

}

@property (retain) NSString * keyLabel;                           //@synthesize keyLabel=_keyLabel - In the implementation block
@property (retain) NSString * access;                             //@synthesize access=_access - In the implementation block
@property (nonatomic,readonly) NSString * keyTag;                 //@synthesize keyTag=_keyTag - In the implementation block
@property (readonly) id<P256PrivateKeyProtocol> key;              //@synthesize key=_key - In the implementation block
@property (readonly) int keyStore;                                //@synthesize keyStore=_keyStore - In the implementation block
@property (readonly) BOOL isPersistent;                           //@synthesize isPersistent=_isPersistent - In the implementation block
+(id)generateNewKeyWithAccess:(id)arg1 label:(id)arg2 tag:(id)arg3 persist:(BOOL)arg4 forceNoSEP:(BOOL)arg5 error:(id*)arg6 ;
+(id)generateNewKeyWithAccess:(id)arg1 label:(id)arg2 tag:(id)arg3 error:(id*)arg4 ;
-(id)description;
-(id<P256PrivateKeyProtocol>)key;
-(NSString *)access;
-(void)setAccess:(NSString *)arg1 ;
-(BOOL)isPersistent;
-(id)initWithKey:(id)arg1 access:(id)arg2 label:(id)arg3 tag:(id)arg4 persist:(BOOL)arg5 error:(id*)arg6 ;
-(void)setKeyLabel:(NSString *)arg1 ;
-(BOOL)persistWithError:(id*)arg1 ;
-(NSString *)keyLabel;
-(NSString *)keyTag;
-(BOOL)isInKeychain;
-(id)initWithDataRepresentation:(id)arg1 keyStore:(int)arg2 error:(id*)arg3 ;
-(BOOL)eraseFromKeychain:(id*)arg1 ;
-(int)keyStore;
@end
