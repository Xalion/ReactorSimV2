#ifndef CudaErrorHandling_h__
#define CudaErrorHandling_h__

#include <cuda_runtime.h>

#include <stdio.h>

#define CudaSafeCall( err ) reactor::errorHandling::__cudaCheckError( err, __FILE__, __LINE__ )
#define CudaCheckError( ) reactor::errorHandling::__cudaCheckError( __FILE__, __LINE__ )

namespace reactor {
	namespace errorHandling {
		// Handles errors for CUDA runtime functions that return an error code
		inline void __cudaCheckError( cudaError err, const char* file, int line ) {
			if( err != cudaSuccess ) {
				fprintf( stderr, "CUDA call returned error %s (%d) in %s on line %d.\n", cudaGetErrorString( err ), err, file, line);
			}
		}

		// Handles errors for CUDA runtime functions that do not return an error code
		inline void __cudaCheckError( const char* file, int line ) {
			__cudaCheckError( cudaGetLastError(), file, line );
		}

	} // errorHandling
} // reactor


#endif // CudaErrorHandling_h__
