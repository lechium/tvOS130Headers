/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SecDbKeychainSerializedMetadata, _SFAuthenticatedCiphertext, NSString, NSData;

@interface SecDbKeychainMetadata : NSObject {

	SecDbKeychainSerializedMetadata* _serializedHolder;

}

@property (readonly) _SFAuthenticatedCiphertext * ciphertext; 
@property (readonly) _SFAuthenticatedCiphertext * wrappedKey; 
@property (readonly) NSString * tamperCheck; 
@property (readonly) NSData * serializedRepresentation; 
-(NSString *)tamperCheck;
-(id)initWithCiphertext:(id)arg1 wrappedKey:(id)arg2 tamperCheck:(id)arg3 error:(id*)arg4 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(_SFAuthenticatedCiphertext *)wrappedKey;
-(_SFAuthenticatedCiphertext *)ciphertext;
@end

