/* IL2CPP: FulfillRewardMonitor$$Enqueue
void FulfillRewardMonitor__Enqueue (FulfillRewardMonitor_o* __this, FulfillPayout_o fulfillPayout, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor$$Enqueue
   void FulfillRewardMonitor__Enqueue (FulfillRewardMonitor_o* __this, FulfillPayout_o
   fulfillPayout, const MethodInfo* method); */

void FulfillRewardMonitor__Enqueue_24400ec(long param_1,uint param_2,double param_3)

{
  undefined8 uStack_50;
  double dStack_48;
  ulong uStack_40;
  double dStack_38;
  uint uStack_24;
  
  if ((bRam0000000004f4b841 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4038);
    FUN_021f03f8(PTR_DAT_049c4040);
    bRam0000000004f4b841 = 1;
  }
  uStack_50 = 0;
  dStack_48 = 0.0;
  if (*(long *)(param_1 + 0xc0) != 0) {
    EconomyModule__EnableUpdateInterceptor_2533e88(*(long *)(param_1 + 0xc0),param_2,0);
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_40 = CONCAT44(uStack_40._4_4_,param_2);
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                (*(long *)(param_1 + 0x100),&uStack_40,&uStack_50,*(undefined8 *)PTR_DAT_049c4038);
      if (*(long *)(param_1 + 0x100) != 0) {
        uStack_40 = (ulong)param_2;
        dStack_38 = dStack_48 + param_3;
        uStack_24 = param_2;
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                  (*(long *)(param_1 + 0x100),&uStack_24,&uStack_40,*(undefined8 *)PTR_DAT_049c4040)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

