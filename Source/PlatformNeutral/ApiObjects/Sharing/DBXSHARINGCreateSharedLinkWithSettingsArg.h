///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"

@class DBXSHARINGCreateSharedLinkWithSettingsArg;
@class DBXSHARINGSharedLinkSettings;

/// 
/// The `DBXSHARINGCreateSharedLinkWithSettingsArg` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
@interface DBXSHARINGCreateSharedLinkWithSettingsArg : NSObject <DBXSerializable> 

/// The path to be shared by the shared link
@property (nonatomic, copy) NSString * _Nonnull path;

/// The requested settings for the newly created shared link
@property (nonatomic) DBXSHARINGSharedLinkSettings * _Nullable settings;

/// Full constructor for the `CreateSharedLinkWithSettingsArg` struct (exposes
/// all instance variables).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path settings:(DBXSHARINGSharedLinkSettings * _Nullable)settings;

/// Convenience constructor for the `CreateSharedLinkWithSettingsArg` struct
/// (exposes only non-nullable instance variables with no default value).
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

/// Returns a human-readable representation of the
/// `DBXSHARINGCreateSharedLinkWithSettingsArg` object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXSHARINGCreateSharedLinkWithSettingsArg`
/// struct.
/// 
@interface DBXSHARINGCreateSharedLinkWithSettingsArgSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXSHARINGCreateSharedLinkWithSettingsArg` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXSHARINGCreateSharedLinkWithSettingsArg * _Nonnull)obj;

/// Returns an instantiation of the `DBXSHARINGCreateSharedLinkWithSettingsArg`
/// object from a json-compatible dictionary representation.
+ (DBXSHARINGCreateSharedLinkWithSettingsArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end