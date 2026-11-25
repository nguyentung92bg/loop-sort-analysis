/* IL2CPP: CloudSaveModule$$OnProviderAuthenticated
void CloudSaveModule__OnProviderAuthenticated (CloudSaveModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$OnProviderAuthenticated
   void CloudSaveModule__OnProviderAuthenticated (CloudSaveModule_o* __this, const MethodInfo*
   method); */

void CloudSaveModule__OnProviderAuthenticated_24ec438(undefined8 param_1)

{
  undefined1 auStack_4 [4];
  
  auStack_4[0] = 0;
  auStack_4[0] = CloudSaveModule__TryReconnect_24ec37c(param_1,1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_4,0);
  return;
}

