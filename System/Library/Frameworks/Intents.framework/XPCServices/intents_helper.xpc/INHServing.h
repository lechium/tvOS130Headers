/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/XPCServices/intents_helper.xpc/intents_helper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INHServing
@required
-(oneway void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(oneway void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;
-(oneway void)fetchShareExtensionIntentForExtensionContextUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)loadDataImageForImage:(id)arg1 scaledWidth:(double)arg2 scaledHeight:(double)arg3 usingPortableImageLoader:(id)arg4 completion:(/*^block*/id)arg5;
-(oneway void)purgeExpiredImagesInEphemeralStore;
-(oneway void)loadSchemaURLsForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)loadSchemaURLsWithCompletion:(/*^block*/id)arg1;
-(oneway void)loadBundleURLsForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2;

@end
