# HPC Provisioning Using Containerization

This repository contains an Ansible playbook to provision a High-Performance Computing (HPC) environment using **Apptainer** (formerly Singularity) containers. It automates the installation of necessary dependencies, builds a container for **UPC++**, and runs a **SLURM** job to test the setup.

---

## **Table of Contents**
1. [Prerequisites](#prerequisites)
2. [How to Run](#how-to-run)
3. [Troubleshooting](#troubleshooting)

---

## **Prerequisites**

Before running the playbook, make sure you have the following installed on your machine:

- **Ansible**: Used to automate the provisioning process. [Install Ansible](https://docs.ansible.com/ansible/latest/installation_guide/index.html)
- **Apptainer**: Used to create and manage containerized environments. [Install Apptainer](https://apptainer.org/)
- **SLURM**: Workload manager to submit and manage batch jobs on the HPC cluster.
- **OpenMPI**: Required to support MPI jobs in the container.
- **C++ Compiler**: Required to build the UPC++ program.

---

## **How to Run**

1. **Clone the repository**
   ```bash
   git clone https://github.com/mvarosyan/HPC-Provisioning-Using-Containerization.git
   cd HPC-Provisioning-Using-Containerization
   ```
   
2. **Review the Inventory**
    - The `inventory.ini` file defines the target host(s) where Ansible will run the playbook.
    - By default, the playbook runs on **localhost**, so you can run it on your local machine for testing.

3. **Run the Playbook**
    ```bash
    ansible-playbook -i inventory.ini playbook.yml
    ```

---

## **Troubleshooting**

**View Logs of SLURM Job**

To view the output and error logs of the SLURM job, use the following commands:

```bash
cat /tmp/upcxx_test.out 
cat /tmp/upcxx_test.err
```

**View the Container**

To verify that the container was created successfully, run the following command:

```bash
ls -lh /opt/upcxx-container.sif
```
