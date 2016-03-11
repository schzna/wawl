#pragma once
#define ENABLE_WAWL_ERROR

#include "BaseType.hpp"
#include "BaseUtility.hpp"

namespace wawl {

	// WinAPI errors
	// need more
	enum class Error : Uint32 {
		Success = ERROR_SUCCESS,
		InvalidFunction = ERROR_INVALID_FUNCTION,
		FileNotFound = ERROR_FILE_NOT_FOUND,
		PathNotFound = ERROR_PATH_NOT_FOUND,
		CannotOpenFiles = ERROR_TOO_MANY_OPEN_FILES,
		AccessDenied = ERROR_ACCESS_DENIED,
		InvalidHandle = ERROR_INVALID_HANDLE,
		StorageTrashed = ERROR_ARENA_TRASHED,
		NotEnoughMemory = ERROR_NOT_ENOUGH_MEMORY,
		InvalidStorageBlock = ERROR_INVALID_BLOCK,
		BadEnvironment = ERROR_BAD_ENVIRONMENT,
		BadFormat = ERROR_BAD_FORMAT,
		InvalidAccess = ERROR_INVALID_ACCESS,
		InvalidData = ERROR_INVALID_DATA,
		OutOfMemory = ERROR_OUTOFMEMORY,
		DriveNotFound = ERROR_INVALID_DRIVE,
		CannotDeleteDirectory = ERROR_CURRENT_DIRECTORY,
		DifferentDevice = ERROR_NOT_SAME_DEVICE,
		NoMoreFiles = ERROR_NO_MORE_FILES,
		MediaAccessProtected = ERROR_WRITE_PROTECT,
		BadUnit = ERROR_BAD_UNIT,
		DeviceNotReady = ERROR_NOT_READY,
		BadCommand = ERROR_BAD_COMMAND,
		CRC = ERROR_CRC,
		BadLengthCommand = ERROR_BAD_LENGTH,
		CannotSeek = ERROR_SEEK,
		NotDOSDisk = ERROR_NOT_DOS_DISK,
		SectorNotFound = ERROR_SECTOR_NOT_FOUND,
		NoPaper = ERROR_OUT_OF_PAPER,
		CannotWrite = ERROR_WRITE_FAULT,
		CannotRead = ERROR_READ_FAULT,
		DeviceNotWork = ERROR_GEN_FAILURE,
		FileSharingViolation = ERROR_SHARING_VIOLATION,
		FileLockViolation = ERROR_LOCK_VIOLATION,
		WrongDisk = ERROR_WRONG_DISK,
		SharingBufferExceeded = ERROR_SHARING_BUFFER_EXCEEDED,
		FileEOF = ERROR_HANDLE_EOF,
		DiskFull = ERROR_HANDLE_DISK_FULL,
		NotSupported = ERROR_NOT_SUPPORTED,
		NetworkPathNotFound = ERROR_REM_NOT_LIST,
		DuplicateName = ERROR_DUP_NAME,
		BadNetworkPath = ERROR_BAD_NETPATH,
		NetworkBusy = ERROR_NETWORK_BUSY,
		DeviceNotExist = ERROR_DEV_NOT_EXIST,
		TooManyCommands = ERROR_TOO_MANY_CMDS,
		AdaptorHardwareError = ERROR_ADAP_HDW_ERR,
		BadNetworkResponse = ERROR_BAD_NET_RESP,
		UnexpectedNetworkError = ERROR_UNEXP_NET_ERR,
		BadRemoteAdaptor = ERROR_BAD_REM_ADAP,
		PrintQueueFull = ERROR_PRINTQ_FULL,
		NoSpoolSpace = ERROR_NO_SPOOL_SPACE,
		PrintCancelled = ERROR_PRINT_CANCELLED,
		NetNameDeleted = ERROR_NETNAME_DELETED,
		NetworkAccessDenied = ERROR_NETWORK_ACCESS_DENIED,
		BadNetworkDeviceType = ERROR_BAD_DEV_TYPE,
		BadNetworkName = ERROR_BAD_NET_NAME,
		TooManyNames = ERROR_TOO_MANY_NAMES,
		TooManySessions = ERROR_TOO_MANY_SESS,
		ServerPaused = ERROR_SHARING_PAUSED,
		ReqestUnaccepted = ERROR_REQ_NOT_ACCEP,
		DevicePaused = ERROR_REDIR_PAUSED,
		FileExists = ERROR_FILE_EXISTS,
		CannotMakeFile = ERROR_CANNOT_MAKE,
		I24Failed = ERROR_FAIL_I24,
		OutOfStorage = ERROR_OUT_OF_STRUCTURES,

		// and more...
	};

	inline Error getLastError() {
		return static_cast<Error>(::GetLastError());
	}

	inline void setLastError(Error error) {
		::SetLastError(unpackEnum(error));
	}

}