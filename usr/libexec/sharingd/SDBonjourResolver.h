/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, SDBonjourResolverDelegate;
#import <sharingd/sharingd-Structs.h>
@class NSObject, NSURL, NSString, NSNumber;

@interface SDBonjourResolver : NSObject {

	BOOL _timeout;
	DNSServiceRef_tRef _resolve;
	DNSServiceRef_tRef _connection;
	NSObject*<OS_dispatch_source> _timer;
	int _error;
	NSURL* _url;
	NSString* _name;
	NSString* _type;
	NSString* _domain;
	NSString* _path;
	NSString* _hostName;
	NSNumber* _portNumber;
	DNSServiceRef_tRef _service;
	id<SDBonjourResolverDelegate> _delegate;

}

@property (readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (readonly) NSString * domain;                                 //@synthesize domain=_domain - In the implementation block
@property (retain) NSString * path;                                     //@synthesize path=_path - In the implementation block
@property (retain) NSString * hostName;                                 //@synthesize hostName=_hostName - In the implementation block
@property (retain) NSNumber * portNumber;                               //@synthesize portNumber=_portNumber - In the implementation block
@property (readonly) DNSServiceRef_tRef service;                        //@synthesize service=_service - In the implementation block
@property (readonly) int error;                                         //@synthesize error=_error - In the implementation block
@property (__weak) id<SDBonjourResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(NSString *)domain;
-(NSString *)type;
-(id<SDBonjourResolverDelegate>)delegate;
-(void)setDelegate:(id<SDBonjourResolverDelegate>)arg1 ;
-(int)error;
-(void)cancel;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)hostName;
-(void)resolve;
-(NSURL *)url;
-(DNSServiceRef_tRef)service;
-(void)setHostName:(NSString *)arg1 ;
-(NSNumber *)portNumber;
-(void)setPortNumber:(NSNumber *)arg1 ;
-(void)notifyClient:(int)arg1 ;
-(id)initWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 path:(id)arg4 timeout:(BOOL)arg5 ;
-(void)parseResults:(const char*)arg1 port:(unsigned short)arg2 txtLen:(unsigned short)arg3 txtRecord:(const char*)arg4 interface:(unsigned)arg5 ;
@end

