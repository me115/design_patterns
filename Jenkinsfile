pipeline {
  agent any
  stages {
    stage('code pushed to github') {
      steps {
        echo 'Commit created to repository'
        writeFile(file: 'output.txt', text: 'Se ha lanzado desde jenkins', encoding: 'UTF-8')
      }
    }

    stage('secondary') {
      steps {
        mail(subject: 'Jenkins step', body: 'Testing', to: 'daniel.gallo1989@gmail.com')
      }
    }

  }
}