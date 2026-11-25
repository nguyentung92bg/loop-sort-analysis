/* IL2CPP: LifetimeScopeH$$InjectIfNotScoped<object>
bool LifetimeScopeH__InjectIfNotScoped_object_ (UnityEngine_Object_o* target, const MethodInfo_26546E4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LifetimeScopeH$$InjectIfNotScoped<object>
   bool LifetimeScopeH__InjectIfNotScoped_object_ (UnityEngine_Object_o* target, const
   MethodInfo_26546E4* method); */

undefined8 LifetimeScopeH__InjectIfNotScoped_object__26546e4(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b90);
    FUN_021f03f8(PTR_DAT_049b6750);
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b3b98);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_02229774(param_2);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar1 = LifetimeScopeH__FindScope_object__2654424(**(undefined8 **)(param_2 + 0x38));
  if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
    FUN_021f0574(*(long *)PTR_DAT_049b3b98);
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar5 = *(long **)(lVar1 + 0x50);
    if (plVar5 != (long *)0x0) {
      if ((param_1 == (long *)0x0) || (*param_1 != *(long *)PTR_DAT_049b3b90)) {
        lVar1 = *plVar5;
        uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049b6750) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar4 + 7) * 0x10 + 0x138);
              goto LAB_0275481c;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b6750,7);
LAB_0275481c:
        (*(code *)*puVar3)(plVar5,param_1,puVar3[1]);
      }
      else {
        VContainer_Unity_ObjectResolverUnityExtensions__InjectGameObject_3f2d474(plVar5,param_1,0);
      }
      return 1;
    }
  }
                    /* try { // try from 0275484c to 02854cbb has its CatchHandler @ 0275484c
                       catch() { ... } // from try @ 0275484c with catch @ 0275484c
                       catch() { ... } // from try @ 02754d64 with catch @ 0275484c
                       catch() { ... } // from try @ 02754df8 with catch @ 0275484c
                       catch() { ... } // from try @ 02754e50 with catch @ 0275484c */
  return 0;
}

