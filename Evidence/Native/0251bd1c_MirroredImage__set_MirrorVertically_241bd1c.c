/* IL2CPP: MirroredImage$$set_MirrorVertically
void MirroredImage__set_MirrorVertically (MirroredImage_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$set_MirrorVertically
   void MirroredImage__set_MirrorVertically (MirroredImage_o* __this, bool value, const MethodInfo*
   method); */

void MirroredImage__set_MirrorVertically_241bd1c(long *param_1,byte param_2)

{
  if (*(byte *)((long)param_1 + 0x111) == (param_2 & 1)) {
    return;
  }
  *(byte *)((long)param_1 + 0x111) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x0251bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  return;
}

