/* IL2CPP: SlicedFilledImage$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
void SlicedFilledImage__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
   void SlicedFilledImage__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
   (SlicedFilledImage_o* __this, const MethodInfo* method); */

void SlicedFilledImage__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_249f260
               (long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0xe4);
  fVar1 = 1.0;
  if (fVar3 <= 1.0) {
    fVar1 = fVar3;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0xe4) = fVar2;
  return;
}

