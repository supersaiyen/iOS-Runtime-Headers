/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSArray, NSString;

@interface DASettingsTemplate : NSObject {
    BOOL _defaultUseSSL;
    NSArray *_domainAliasPatterns;
    int _httpPort;
    int _httpsPort;
    BOOL _isDefaultTemplate;
    NSString *_name;
    int _order;
    NSString *_pathFormat;
    int _port;
    NSString *_primaryDomain;
    NSString *_primaryUsernameDomain;
}

@property(readonly) int defaultPort;
@property(readonly) NSString * defaultScheme;
@property BOOL defaultUseSSL;
@property(retain) NSArray * domainAliasPatterns;
@property int httpPort;
@property int httpsPort;
@property BOOL isDefaultTemplate;
@property(retain) NSString * name;
@property int order;
@property(retain) NSString * pathFormat;
@property(retain) NSString * primaryDomain;
@property(retain) NSString * primaryUsernameDomain;

+ (BOOL)_isValidPort:(int)arg1;
+ (id)defaultTemplate;
+ (id)knownTemplates;
+ (BOOL)requiresPathFormat;
+ (BOOL)requiresPorts;
+ (id)templateWithDomain:(id)arg1;

- (void)_appendPrimarySuffixToUsernameIfNeeded:(id)arg1;
- (id)_initWithName:(id)arg1 plist:(id)arg2;
- (BOOL)_isDomainInAliases:(id)arg1;
- (BOOL)_isPrincipalPathCustomForAccount:(id)arg1;
- (id)_principalPathForAccount:(id)arg1;
- (void)_setPrincipalURLForAccount:(id)arg1;
- (int)compare:(id)arg1;
- (void)dealloc;
- (int)defaultPort;
- (id)defaultScheme;
- (BOOL)defaultUseSSL;
- (id)description;
- (id)descriptionForAccount:(id)arg1;
- (id)domainAliasPatterns;
- (unsigned int)hash;
- (int)httpPort;
- (int)httpsPort;
- (void)initAccount:(id)arg1;
- (BOOL)isDefaultTemplate;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)order;
- (id)pathFormat;
- (id)primaryDomain;
- (id)primaryUsernameDomain;
- (void)setDefaultUseSSL:(BOOL)arg1;
- (void)setDomain:(id)arg1 forAccount:(id)arg2;
- (void)setDomainAliasPatterns:(id)arg1;
- (void)setHttpPort:(int)arg1;
- (void)setHttpsPort:(int)arg1;
- (void)setIsDefaultTemplate:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setOrder:(int)arg1;
- (void)setPathFormat:(id)arg1;
- (void)setPort:(int)arg1 forAccount:(id)arg2;
- (void)setPrimaryDomain:(id)arg1;
- (void)setPrimaryUsernameDomain:(id)arg1;
- (void)setPrincipalURLForAccount:(id)arg1 toURL:(id)arg2;
- (void)setURL:(id)arg1 forAccount:(id)arg2;
- (void)setUseSSL:(BOOL)arg1 forAccount:(id)arg2;
- (void)setUsername:(id)arg1 forAccount:(id)arg2;

@end
