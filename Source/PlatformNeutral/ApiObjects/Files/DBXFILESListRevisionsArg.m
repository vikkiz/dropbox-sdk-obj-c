///
/// Auto-generated by Stone, do not modify.
///

#import "DBXFILESListRevisionsArg.h"
#import "DBXStoneSerializers.h"
#import "DBXStoneValidators.h"

@implementation DBXFILESListRevisionsArg 

- (instancetype)initWithPath:(NSString *)path limit:(NSNumber *)limit {
    [DBXStoneValidators stringValidator:nil maxLength:nil pattern:@"/(.|[\\r\\n])*|id:.*|(ns:[0-9]+(/.*)?)"](path);
    [DBXStoneValidators numericValidator:[NSNumber numberWithInt:1] maxValue:[NSNumber numberWithInt:100]](limit ?: [NSNumber numberWithUnsignedLong:10]);

    self = [super init];
    if (self != nil) {
        _path = path;
        _limit = limit ?: [NSNumber numberWithUnsignedLong:10];
    }
    return self;
}

- (instancetype)initWithPath:(NSString *)path {
    return [self initWithPath:path limit:nil];
}

+ (NSDictionary *)serialize:(id)obj {
    return [DBXFILESListRevisionsArgSerializer serialize:obj];
}

+ (id)deserialize:(NSDictionary *)dict {
    return [DBXFILESListRevisionsArgSerializer deserialize:dict];
}

- (NSString *)description {
    return [[DBXFILESListRevisionsArgSerializer serialize:self] description];
}

@end


@implementation DBXFILESListRevisionsArgSerializer 

+ (NSDictionary *)serialize:(DBXFILESListRevisionsArg *)valueObj {
    NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

    jsonDict[@"path"] = valueObj.path;
    jsonDict[@"limit"] = valueObj.limit;

    return jsonDict;
}

+ (DBXFILESListRevisionsArg *)deserialize:(NSDictionary *)valueDict {
    NSString *path = valueDict[@"path"];
    NSNumber *limit = valueDict[@"limit"];

    return [[DBXFILESListRevisionsArg alloc] initWithPath:path limit:limit];
}

@end