#pragma once
#include "exported.hpp"

typedef enum
{
	RaidUnknownObject = 0xFFFFFFFF,s
	RaidAdapterObject = 0x0,
	RaidUnitObject = 0x1,
	RaidDriverObject = 0x2,
} RAID_OBJECT_TYPE;

typedef enum
{
	DeviceStateNotPresent = 0x0,
	DeviceStateWorking = 0x1,
	DeviceStateStopped = 0x2,
	DeviceStatePendingStop = 0x3,
	DeviceStatePendingRemove = 0x4,
	DeviceStateSurpriseRemoval = 0x5,
	DeviceStateDeleted = 0x6,
	DeviceStateDisabled = 0x7,
	DeviceStateNoResource = 0x8,
} DEVICE_STATE;

typedef enum
{
	RaidDeferredTimerRequest = 0x1,
	RaidDeferredError = 0x2,
	RaidDeferredPause = 0x3,
	RaidDeferredResume = 0x4,
	RaidDeferredPauseDevice = 0x5,
	RaidDeferredResumeDevice = 0x6,
	RaidDeferredBusy = 0x7,
	RaidDeferredReady = 0x8,
	RaidDeferredDeviceBusy = 0x9,
	RaidDeferredDeviceReady = 0xA,
	RaidDeferredAdditionalTimerRequest = 0xB,
	RaidDeferredAsyncNotification = 0xC,
} RAID_DEFERRED_TYPE;

typedef struct _RAID_WORK_ITEM_CONTEXT
{
	struct _IO_WORKITEM* WorkItem;
	struct _IRP* Irp;
} RAID_WORK_ITEM_CONTEXT, * PRAID_WORK_ITEM_CONTEXT;

typedef struct __declspec( align( 8 ) ) _STOR_ASYNC_NOTIFY_CONTEXT
{
	struct _IO_WORKITEM* WorkItem;
	unsigned __int64 Flags;
	unsigned int InUse;
} STOR_ASYNC_NOTIFY_CONTEXT, * PSTOR_ASYNC_NOTIFY_CONTEXT;

typedef struct __declspec( align( 8 ) ) _RAID_SHARED_WORK_ITEM_CONTEXT
{
	struct _IO_WORKITEM* WorkItem;
	struct _IRP* Irp;
	unsigned int InUse;
} RAID_SHARED_WORK_ITEM_CONTEXT, * PRAID_SHARED_WORK_ITEM_CONTEXT;

typedef struct _RAID_UNIT_REGISTRY_PARAMETERS
{
	unsigned int BusyRetryCount;
	unsigned int QueueFullWaitIoPercentage;
	unsigned int BusyPauseTime;
	unsigned int EnableLogoETW;
	unsigned int DisableIdlePowerManagement;
	unsigned int MinimumIdleTimeoutInMS;
} RAID_UNIT_REGISTRY_PARAMETERS, * PRAID_UNIT_REGISTRY_PARAMETERS;

typedef struct _RAID_UNIT_ATTRIBUTES
{
	unsigned __int32 VmPassThroughLun : 1;
	unsigned __int32 DeviceAttentionSupported : 1;
	unsigned __int32 AsyncNotificationSupported : 1;
	unsigned __int32 D3ColdNotSupported : 1;
	unsigned __int32 DefaultWriteCacheEnabled : 1;
	unsigned __int32 Reserved : 27;
} RAID_UNIT_ATTRIBUTES, * PRAID_UNIT_ATTRIBUTES;

typedef struct _RAID_UNIT_QOS
{
	char Enabled;
	unsigned int RetryCount;
	unsigned int ResetUnresponsiveTimeoutIn500MS;
	unsigned int ResetInterval;
	unsigned int HwTimeoutInSec;
	unsigned int ResetTimeoutInSec;
	unsigned int MaxWaitTimeIn500MS;
	char TimerSettingChangeNeeded;
	int AdapterWaitTimeoutCheckEnabled;
	unsigned __int64 QosThresholdIn100NS;
} RAID_UNIT_QOS, * PRAID_UNIT_QOS;

typedef struct __declspec( align( 8 ) ) _RAID_TELEMETRY_ERROR_ENTRY
{
	char SrbStatus;
	char ScsiStatus;
	char SenseKey;
	char AdditionalSenseCode;
	char AdditionalSenseCodeQualifier;
	char CdbOpCode;
	char Reserved1[ 2 ];
	unsigned int IoSize;
	unsigned int IoLatency;
	unsigned int WaitDuration;
	unsigned int QueueDepth;
	unsigned __int64 LBA;
	union
	{
		unsigned int Quantity;
		unsigned int Position;
	} u;
} RAID_TELEMETRY_ERROR_ENTRY, * PRAID_TELEMETRY_ERROR_ENTRY;

typedef struct _RAID_TELEMETRY_SAMPLED_ERROR_LOG
{
	unsigned int TotalErrors;
	unsigned int TotalReadWriteErrors;
	unsigned int TotalStRtlImpendingDeviceFailureErrors;
	unsigned int TotalStRtlTotalDeviceFailureErrors;
	RAID_TELEMETRY_ERROR_ENTRY LastError;
	RAID_TELEMETRY_ERROR_ENTRY SampledErrors[ 10 ];
} RAID_TELEMETRY_SAMPLED_ERROR_LOG, * PRAID_TELEMETRY_SAMPLED_ERROR_LOG;

typedef struct _RAID_TELEMETRY_UNIQUE_ERROR_LOG
{
	RAID_TELEMETRY_ERROR_ENTRY UniqueErrors[ 5 ];
} RAID_TELEMETRY_UNIQUE_ERROR_LOG, * PRAID_TELEMETRY_UNIQUE_ERROR_LOG;

typedef struct __declspec( align( 4 ) ) _TELEMETRY_UNIT_EXTENSION
{
	struct
	{
		unsigned __int32 DeviceHealthEventsLogged : 1;
		unsigned __int32 FailedFirstSMARTCommand : 1;
		unsigned __int32 FailedFirstDeiceStatisticsLogCommand : 1;
		unsigned __int32 FailedFirstNvmeCloudSSDCommand : 1;
		unsigned __int32 SmartPredictFailure : 1;
		unsigned __int32 Reserved : 27;
	} Flags;
	char NvmeCriticalWarning;
} TELEMETRY_UNIT_EXTENSION, * PTELEMETRY_UNIT_EXTENSION;

typedef struct _RAID_IO_RESOURCES
{
	unsigned int QueueTag;
	void* SrbExtension;
	struct EXTENDED_REQUEST_BLOCK* Xrb;
	void* SenseInfo;
} RAID_IO_RESOURCES, * PRAID_IO_RESOURCES;

typedef struct __declspec( align( 16 ) ) _RAID_DEFERRED_HEADER
{
	SLIST_ENTRY Link;
	int Pool;
} RAID_DEFERRED_HEADER, * PRAID_DEFERRED_HEADER;

typedef struct _STOR_SCSI_IDENTITY
{
	INQUIRYDATA* InquiryData;        //0x0000
	STRING SerialNumber;            //0x0008 
	unsigned char Supports1667;        //0x0018 
	unsigned char ZonedDevice;        //0x0019 
	char pad_0x001A[ 0x6 ];            //0x001A
	UINT_PTR DeviceId;                //0x0020 
	UINT_PTR AtaDeviceId;            //0x0028 
	UINT_PTR RichDeviceDescription;    //0x0030 
} STOR_SCSI_IDENTITY, * PSTOR_SCSI_IDENTITY;

typedef struct _STOR_SCSI_ADDRESS
{
	char PathId;
	char TargetId;
	char Lun;
	char Reserved;
} STOR_SCSI_ADDRESS, * PSTOR_SCSI_ADDRESS;

typedef struct __declspec( align( 16 ) ) _RAID_DEFERRED_ELEMENT
{
	RAID_DEFERRED_HEADER Header;
	RAID_DEFERRED_TYPE Type;
	STOR_SCSI_ADDRESS Address;
	union
	{
		struct __declspec( align( 8 ) )
		{
			void( __fastcall * HwTimerRoutine )( void* );
			unsigned int Timeout;
		} Timer;
		struct
		{
			SCSI_REQUEST_BLOCK* Srb;
			unsigned int ErrorCode;
			unsigned int UniqueId;
			char FreeErrorInfo[ 16 ];
		} Error;
		struct
		{
			unsigned int Timeout;
		} PauseDevice;
		struct
		{
			unsigned int RequestsToComplete;
		} Busy;
		struct
		{
			unsigned int RequestsToComplete;
		} DeviceBusy;
		struct __declspec( align( 8 ) )
		{
			struct STOR_TIMER_CONTEXT* StorTimer;
			LARGE_INTEGER Timeout;
			unsigned int TolerableDelay;
		} AdditionalTimer;
		struct
		{
			STOR_ASYNC_NOTIFY_CONTEXT* StorAsyncNotify;
		} AsyncNotification;
	};
} RAID_DEFERRED_ELEMENT, * PRAID_DEFERRED_ELEMENT;

typedef struct __declspec( align( 8 ) ) _EXTENDED_DEVICE_QUEUE
{
	__int16 Type;
	__int16 Size;
	int Depth;
	struct STOR_IO_GATEWAY* Gateway;
	int DeviceCount;
	int ByPassCount;
	int ByPassPowerCount;
	int PauseCount;
	int BusyCount;
	char Frozen;
	char Locked;
	char Untagged;
	char PowerLocked;
	unsigned int QuiescenceClients;
	KEVENT QuiescenceEvent;
	volatile int RWLock;
	int OutstandingCount;
	LIST_ENTRY DeviceList;
	LIST_ENTRY ByPassList;
	LIST_ENTRY QosReqList;
	LIST_ENTRY ZoneWriteGroupList;
	unsigned __int64 ZoneWriteGroupListLock;
	unsigned int ZoneWriteGroupListEntries;
	int PeriodicMaxDeviceCount;
	int PeriodicMaxOutstandingCount;
} EXTENDED_DEVICE_QUEUE, * PEXTENDED_DEVICE_QUEUE;

typedef struct __declspec( align( 8 ) ) _IO_QUEUE
{
	DEVICE_OBJECT* DeviceObject;
	void( __fastcall* StartIo )( DEVICE_OBJECT*, struct _IRP*, void* );
	EXTENDED_DEVICE_QUEUE DeviceQueue;
	unsigned int QueueChanged;
} IO_QUEUE, * PIO_QUEUE;

typedef struct _QUEUE_TAG_LIST
{
	struct QUEUE_TAG_LIST_HEADER* Header;
	struct __declspec( align( 64 ) ) QUEUE_TAG_ENTRY* Buffer;
	unsigned int TagsPerNode;
} QUEUE_TAG_LIST, * PQUEUE_TAG_LIST;

typedef struct __declspec( align( 4 ) ) _RAID_POWER_STATE
{
	SYSTEM_POWER_STATE SystemState;
	DEVICE_POWER_STATE DeviceState;
	POWER_ACTION PowerAction;
	char SystemPoweringDown;
} RAID_POWER_STATE, * PRAID_POWER_STATE;

typedef struct __declspec( align( 64 ) ) _RAID_UNIT_EXTENSION
{
	RAID_OBJECT_TYPE ObjectType;
	DEVICE_OBJECT* DeviceObject;
	void* UnitExtension;
	struct RAID_ADAPTER_EXTENSION* Adapter;
	unsigned __int64 SlowLock;
	DEVICE_STATE DeviceState;
	LIST_ENTRY NextUnit;
	LIST_ENTRY UnitTableLink;
	union
	{
		STOR_ADDR_BTL8 StorAddressBTL8;
		struct
		{
			unsigned __int16 AddressType;
			unsigned __int16 AddressPort;
			unsigned int AddressLength;
			STOR_SCSI_ADDRESS Address;
		};
	};
	STOR_SCSI_IDENTITY Identity;
	struct
	{
		__int8 DeviceClaimed : 1;
		__int8 Enumerated : 1;
		__int8 Present : 1;
		__int8 Temporary : 1;
		__int8 WmiInitialized : 1;
		__int8 Zombie : 1;
		__int8 RescanNeeded : 1;
		__int8 PoweringUp : 1;
		__int8 PoweringDown : 1;
		__int8 D3ColdSupported : 1;
		__int8 D3ColdEnabled : 1;
		__int8 ActiveReferenceOnAdapter : 1;
		__int8 DeviceInitialized : 1;
		__int8 DisabledPendingTimer : 1;
		__int8 DumpActiveNotCapable : 1;
		__int8 RegisteredForPoFx : 1;
		__int8 BootUnit : 1;
		__int8 Unresponsive : 1;
		__int8 DumpAlwaysPowerOn : 1;
		__int8 VmLunInterfaceState : 1;
		unsigned __int32 Reserved : 12;
	} Flags;
	union
	{
		struct
		{
			unsigned __int32 PoFxRegistrationPending : 1;
			unsigned __int32 PowerCycleCountSavePending : 1;
			unsigned __int32 Reserved : 30;
		};
		unsigned int AsUlong;
	} InterlockedFlags;
	KEVENT ZeroOutstandingEvent;
	RAID_POWER_STATE Power;
	struct STOR_EVENT_QUEUE* PendingQueue;
	QUEUE_TAG_LIST TagList;
	IO_QUEUE IoQueue;
	unsigned int MaxQueueDepth;
	unsigned int LogicalSectorSize;
	STORAGE_POWERUP_REASON_TYPE PowerupReason;
	ACPI_INTERFACE_STANDARD2 AcpiInterface;
	int OutstandingCount;
	unsigned int PagingPathCount;
	unsigned int CrashDumpPathCount;
	unsigned int HiberPathCount;
	KTIMER PendingTimer;
	KDPC PendingDpc;
	KTIMER PauseTimer;
	KDPC PauseTimerDpc;
	KDPC RestartDpc;
	struct RAID_MEMORY_REGION* CommonBufferVAs;
	unsigned int CommonBufferSize;
	unsigned int CommonBufferBlocks;
	unsigned int DefaultTimeout;
	int ResetCount;
	struct
	{
		RAID_DEFERRED_ELEMENT PauseDevice;
		RAID_DEFERRED_ELEMENT ResumeDevice;
		RAID_DEFERRED_ELEMENT DeviceBusy;
		RAID_DEFERRED_ELEMENT DeviceReady;
		RAID_DEFERRED_ELEMENT AsyncNotification;
	} DeferredList;
	RAID_IO_RESOURCES ResetResources;
	int ResetResourcesAcquired;
	char SenseInfoSize;
	char CallFreeDumpPtrSRB;
	char DumpPowerReady;
	char StackDumpPowerReady;
	struct _EX_RUNDOWN_REF_CACHE_AWARE* PoFxRundownProtection;
	struct RAID_UNIT_POFX* PoFx;
	D3COLD_SUPPORT_INTERFACE* D3ColdInterface;
	volatile int PowerUpRequired;
	volatile int PowerDownRequired;
	struct _IO_WORKITEM* HierarchicalResetWorkItem;
	int HierarchicalResetWorkItemTimeoutCountdown;
	int HierarchicalResetSrbTimeoutCountdown;
	unsigned int HierarchicalResetAbortCount;
	volatile int PendingRequests;
	unsigned __int64 HierarchicalResetWorkItemSpinLock;
	RAID_UNIT_REGISTRY_PARAMETERS RegistryParameters;
	RAID_UNIT_ATTRIBUTES UnitAttributes;
	UNICODE_STRING VmLunPnpInterfaceName;
	RAID_WORK_ITEM_CONTEXT QuiesceDeviceWorkItem;
	STOR_ASYNC_NOTIFY_CONTEXT StorAsyncNotify;
	RAID_SHARED_WORK_ITEM_CONTEXT PowerWorkItem;
	struct
	{
		char FStateTransition;
		char DStateTransition;
		unsigned int FState;
		struct _IRP* PowerIrp;
	} PendingPowerUpContext;
	SLIST_ENTRY PendingPowerUpListEntry;
	UNICODE_STRING SesPnpInterfaceName;
	unsigned __int64 IoCountDelayedByLatencyCap;
	GUID DeviceGuid;
	TELEMETRY_UNIT_EXTENSION TelemetryExtension;
	unsigned __int64 FirstDPNRTimeAfterCS;
	unsigned __int64 LastF1StartTime;
	unsigned __int64 F1DurationInCS;
	unsigned __int64 LastDPNRStartTime;
	unsigned __int64 DPNRDurationInCS;
	unsigned __int64 ActiveReferencesInCS;
	unsigned __int64 ActiveReferencesInCoalescing;
	unsigned int UnitTimeoutsInCS;
	unsigned int F0TransitionsSinceCSStateChange;
	unsigned int D0TransitionsSinceCSStateChange;
	unsigned int F0TransitionsLongSinceCSStateChange;
	unsigned int D0TransitionsLongSinceCSStateChange;
	unsigned __int64 UnresponsiveRequests;
	unsigned __int64 QosGuaranteeFailures;
	unsigned __int64 TimeoutsInGateway;
	unsigned __int64 TimeoutsInLunQueue;
	unsigned int TimeoutsInMiniport;
	unsigned int PeriodicMaxDeviceCountAtSwTimeout;
	unsigned int PauseDeviceCount;
	unsigned int DeviceBusyCount;
	unsigned int BusyCompletionCount;
	unsigned int StorpTraceLoggingPerformanceEnabled;
	struct RAID_TELEMETRY_PERF_BUCKET* TelemetryPerfBuckets;
	LARGE_INTEGER TelemetryLastPerfCollectionTimeStamp;
	struct RAID_TELEMETRY_PERF_BUCKET* TelemetryPerfPreviousCounters;
	char* TelemetryMaxReadWriteLatencyPerNumaNode;
	unsigned __int64 TelemetryMaxFlushLatency;
	unsigned __int64 TelemetryMaxUnmapLatency;
	unsigned __int64 TelemetryLock;
	RAID_TELEMETRY_SAMPLED_ERROR_LOG TelemetrySampledErrorLog;
	RAID_TELEMETRY_UNIQUE_ERROR_LOG TelemetryUniqueErrorLog;
	unsigned __int64 TelemetryBytesWritten;
	unsigned __int64 TelemetryStreamBytesWritten;
	unsigned int PowerCycleCount;
	LARGE_INTEGER InitialTimestamp;
	RAID_UNIT_QOS Qos;
	unsigned __int64 LastHierarchicalResetEndTime;
	struct DUMP_DISK_INFO* CrashDumpInfo;
	struct DUMP_DISK_INFO* HiberDumpInfo;
	unsigned __int64 ZoneSize;
} RAID_UNIT_EXTENSION, * PRAID_UNIT_EXTENSION;