/**
 * This file is a part of Kyte released under the MIT licence.
 * See the LICENCE file for more information
 */

#pragma once

#ifndef _RG_ITask_h
#define _RG_ITask_h

namespace RG {
	class ITask {
	private:
		char* _Name;
	public:
		ITask();
		virtual ~ITask();
		
		virtual void Run();
		virtual bool ToBeDisposedByWorker() const;
		
		void SetName(const char* name);
		const char* GetName() const;
	};
}

#endif // _RG_ITask_h