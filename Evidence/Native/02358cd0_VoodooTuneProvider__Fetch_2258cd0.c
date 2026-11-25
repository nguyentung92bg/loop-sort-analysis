/* IL2CPP: VoodooTuneProvider$$Fetch
Cysharp_Threading_Tasks_UniTask_o VoodooTuneProvider__Fetch (VoodooTuneProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooTuneProvider$$Fetch
   Cysharp_Threading_Tasks_UniTask_o VoodooTuneProvider__Fetch (VoodooTuneProvider_o* __this, const
   MethodInfo* method); */

undefined1  [16] VoodooTuneProvider__Fetch_2258cd0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_049b5138;
  if ((bRam0000000004f49bdd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49bdd = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined1 (*) [16])(*(long *)(lVar2 + 0xb8) + 0x10);
}

