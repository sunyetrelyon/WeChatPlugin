//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, YYMemoryCache;

@interface EGOCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheInfoQueue;
    NSObject<OS_dispatch_queue> *_frozenCacheInfoQueue;
    NSObject<OS_dispatch_queue> *_diskQueue;
    NSMutableDictionary *_cacheInfo;
    NSString *_directory;
    BOOL _needsSave;
    YYMemoryCache *_memoryCache;
    double _defaultTimeoutInterval;
    NSDictionary *_frozenCacheInfo;
}

+ (id)globalCache;
+ (id)currentCache;
@property(copy, nonatomic) NSDictionary *frozenCacheInfo; // @synthesize frozenCacheInfo=_frozenCacheInfo;
@property(nonatomic) double defaultTimeoutInterval; // @synthesize defaultTimeoutInterval=_defaultTimeoutInterval;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setPlist:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setPlist:(id)arg1 forKey:(id)arg2;
- (id)plistForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (void)setImageInMemoryForKey:(id)arg1 forKey:(id)arg2;
- (id)imageInMemoryForKey:(id)arg1;
- (id)imageForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)setNeedsSave;
- (void)setData:(id)arg1 forKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)copyFilePath:(id)arg1 asKey:(id)arg2 withTimeoutInterval:(double)arg3;
- (void)copyFilePath:(id)arg1 asKey:(id)arg2;
- (void)setCacheTimeoutInterval:(double)arg1 forKey:(id)arg2;
- (id)allKeys;
- (id)dateForKey:(id)arg1;
- (BOOL)hasCacheForKey:(id)arg1;
- (void)removeCacheForKey:(id)arg1;
- (void)clearMemoryCache;
- (void)clearCache;
- (void)setMemoryCacheCountLimit:(unsigned long long)arg1;
- (void)setMemoryCacheAgeLimit:(double)arg1;
- (void)setMemoryCacheCostLimit:(unsigned long long)arg1;
- (void)setMemoryCacheName:(id)arg1;
- (id)initWithCacheDirectory:(id)arg1;
- (id)init;

@end
