/* IL2CPP: NakamaBootstrapper$$OnApiServiceReady
void NakamaBootstrapper__OnApiServiceReady (NakamaBootstrapper_o* __this, Voodoo_Nakama_Services_INakamaApiService_o* apiService, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$OnApiServiceReady
   void NakamaBootstrapper__OnApiServiceReady (NakamaBootstrapper_o* __this,
   Voodoo_Nakama_Services_INakamaApiService_o* apiService, const MethodInfo* method); */

void NakamaBootstrapper__OnApiServiceReady_2245154(long param_1,undefined8 param_2)

{
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 0;
  if (*(char *)(param_1 + 0x49) == '\0') {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    thunk_FUN_021f190c();
    NakamaBootstrapper__SubscribeToNakamaInit_22451a0(param_1);
    auStack_14[0] = NakamaBootstrapper__InitializeApiService_22452a0(param_1);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_14,0);
  }
  return;
}

